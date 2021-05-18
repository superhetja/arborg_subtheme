<?php

/**
 * @file
 * Lists available colors and color schemes for the Bootstrap Barrio theme.
 */

$info = [
  // Available colors and color labels used in theme.
  'fields' => [
    'top' => t('Header background top'),
    'bottom' => t('Header background bottom'),
    'bg' => t('Main background'),
    'sidebar' => t('Sidebar background'),
    'sidebarborders' => t('Sidebar borders'),
    'footer' => t('Footer background'),
    'button' => t('Primary button background'),
    'buttonhover' => t('Primary button hover'),
    'titleslogan' => t('Title and slogan'),
    'text' => t('Text color'),
    'link' => t('Link color'),
  ],
  // Pre-defined color schemes.
  'schemes' => [
    'default' => [
      'title' => t('Arborg (default)'),
      'colors' => [
        'top' => '#055a8e',
        'bottom' => '#1d84c3',
        'bg' => '#f8f9fb',
        'sidebar' => '#f6f6f2',
        'sidebarborders' => '#f9f9f9',
        'footer' => '#292929',
        'button' => '#007bff',
        'buttonhover' => '#0256b1',
        'titleslogan' => '#fffeff',
        'text' => '#3b3b3b',
        'link' => '#0071b3',
      ],
    ],
  ],

  // CSS files (excluding @import) to rewrite with new color scheme.
  'css' => [
    'css/colors.css',
  ],

  // Files to copy.
  'copy' => [
    'logo.svg',
  ],

  // Preview files.
  'preview_library' => 'arborg_subtheme/color.preview',
  'preview_html' => 'color/preview.html',

  // Attachments.
  '#attached' => [
    'drupalSettings' => [
      'color' => [
        // Put the logo path into JavaScript for the live preview.
        'logo' => theme_get_setting('logo.url', 'arborg_subtheme'),
      ],
    ],
  ],
];
