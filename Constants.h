//
//  Constants.h
//
//  Created by Ian Binnie on 24/07/12.
//  Copyright (c) 2012 Ian Binnie. All rights reserved.
//

#define QETNotification @"QET_AutomatorAction"
#define MAX_TEXT_FILE 500000

// PreferencesController Key Constants
extern NSString *const PREF_SORT_FIELD;
extern NSString *const PREF_SORT_DIRECTION;
extern NSString *const PREF_DIRECTORY_ICON;
extern NSString *const PREF_FILE_ICON;
extern NSString *const PREF_HIDDEN_FILES;
extern NSString *const PREF_AUTOMATIC_REFRESH;
extern NSString *const PREF_SPLIT_PERCENTAGE;
extern NSString *const PREF_DEFAULT_DIR;
extern NSString *const PREF_REFRESH_DIR;

extern NSString *const PREF_FILE_COLUMN_WIDTH;
extern NSString *const PREF_FILE_COLUMN_HIDDEN;
extern NSString *const PREF_FILE_COLUMN_ORDER;
extern NSString *const PREF_DIR_COLUMN_WIDTH;
extern NSString *const PREF_DIR_COLUMN_HIDDEN;
extern NSString *const PREF_DIR_COLUMN_ORDER;

extern NSString *const PREF_DATE_WIDTH;
extern NSString *const PREF_DATE_RELATIVE;
extern NSString *const PREF_DATE_FORMAT;
extern NSString *const PREF_DATE_SHOW_CREATE;

extern NSString *const PreferencesControllerDateWidthsDidChangeNotification;
extern NSString *const DirectoryItemDidRemoveDirectoriesNotification;

// Column Identifier Key Constants
extern NSString *const COLUMNID_NAME;
extern NSString *const COLUMNID_DATE;
extern NSString *const COLUMNID_CREATION;
extern NSString *const COLUMNID_SIZE;
extern NSString *const COLUMNID_TAG;
