//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CAColorMatrix {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8;
    float _field9;
    float _field10;
    float _field11;
    float _field12;
    float _field13;
    float _field14;
    float _field15;
    float _field16;
    float _field17;
    float _field18;
    float _field19;
    float _field20;
};

struct CATransform3D {
    double m11;
    double m12;
    double m13;
    double m14;
    double m21;
    double m22;
    double m23;
    double m24;
    double m31;
    double m32;
    double m33;
    double m34;
    double m41;
    double m42;
    double m43;
    double m44;
};

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct NSDirectionalEdgeInsets {
    double top;
    double leading;
    double bottom;
    double trailing;
};

struct SBFolderPredictedVisibleColumn {
    unsigned long long iconListIndex;
    struct SBIconListPredictedVisibleColumn predictedVisibleColumn;
};

struct SBHClockApplicationIconImageMetrics {
    double secondsHandWidth;
    double secondsHandLength;
    double secondsHandleLength;
    double secondsHandRingDiameter;
    double secondsHandRingKnockoutDiameter;
    struct CGSize secondsHandBounds;
    double minutesHandWidth;
    double minutesHandLength;
    double minutesHandRingDiameter;
    double minutesHandRingKnockoutDiameter;
    struct CGSize minutesHandBounds;
    double shadowRadius;
    double shadowInset;
    double hoursHandWidth;
    double hoursHandLength;
    struct CGSize hoursHandBounds;
    double separatorWidth;
    double separatorLength;
    double separatorExtraLength;
    double faceRadius;
    double numberPointSize;
    double contentsScale;
    struct SBIconImageInfo iconImageInfo;
};

struct SBHFloatRange {
    double _field1;
    double _field2;
};

struct SBHIconGridRange {
    unsigned long long _field1;
    struct SBHIconGridSize _field2;
};

struct SBHIconGridSize {
    unsigned short columns;
    unsigned short rows;
};

struct SBHIconGridSizeClassAreas {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
};

struct SBHIconGridSizeClassExtraFloats {
    double icon;
    double small;
    double medium;
    double large;
    double newsLargeTall;
    double extraLarge;
};

struct SBHIconGridSizeClassIconImageInfos {
    struct SBIconImageInfo icon;
    struct SBIconImageInfo small;
    struct SBIconImageInfo medium;
    struct SBIconImageInfo large;
    struct SBIconImageInfo newsLargeTall;
    struct SBIconImageInfo extraLarge;
};

struct SBHIconGridSizeClassSizes {
    struct SBHIconGridSize small;
    struct SBHIconGridSize medium;
    struct SBHIconGridSize large;
    struct SBHIconGridSize newsLargeTall;
    struct SBHIconGridSize extraLarge;
};

struct SBHIconManagerStatistics {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    unsigned long long _field9;
    unsigned long long _field10;
    unsigned long long _field11;
    unsigned long long _field12;
    unsigned long long _field13;
    unsigned long long _field14;
    unsigned long long _field15;
    unsigned long long _field16;
    unsigned long long _field17;
    unsigned long long _field18;
    unsigned long long _field19;
    unsigned long long _field20;
    unsigned long long _field21;
    unsigned long long _field22;
};

struct SBHPadAddWidgetSheetMetrics {
    double sheetMargin;
    double leadingPadding;
    double sidebarWidth;
    double gutterPadding;
    double trailingPadding;
    double topPadding;
    double widgetScaleFactor;
    struct CGSize scaledWidgetSize;
    unsigned long long widgetColumns;
};

struct SBHPageManagementCellMetrics {
    struct CGSize fullListViewSize;
    struct CGSize scaledListViewSize;
    struct UIEdgeInsets foregroundInsets;
    struct UIEdgeInsets backgroundInsets;
    double listViewVerticalPositionAdjustment;
    double toggleButtonDiameter;
    double toggleButtonVerticalMargin;
};

struct SBHStackLayoutMetrics {
    double _field1;
    struct CGSize _field2;
    struct CGPoint _field3;
    double _field4;
    double _field5;
    double _field6;
};

struct SBHWidgetFilteringParameters {
    unsigned long long families;
    _Bool includesNonStackable;
};

struct SBIconApproximateLayoutPosition {
    unsigned long long horizontal;
    unsigned long long vertical;
};

struct SBIconCoordinate {
    long long row;
    long long col;
};

struct SBIconImageInfo {
    struct CGSize size;
    double scale;
    double continuousCornerRadius;
};

struct SBIconListLayoutAnimationParameters {
    struct CGPoint _field1;
    double _field2;
    struct SBIconImageInfo _field3;
    _Bool _field4;
    struct SBIconCoordinate _field5;
    _Bool _field6;
    _Bool _field7;
    unsigned long long _field8;
};

struct SBIconListLayoutMetricsParameters {
    struct CGRect _field1;
    double _field2;
    struct UIEdgeInsets _field3;
    long long _field4;
    long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    struct SBHIconGridSizeClassSizes _field8;
    unsigned long long _field9;
    unsigned long long _field10;
    unsigned long long _field11;
    unsigned long long _field12;
    struct SBHIconGridSize _field13;
    long long _field14;
    struct CGSize _field15;
    struct CGSize _field16;
    double _field17;
    struct CGSize _field18;
    unsigned long long _field19;
};

struct SBIconListModelRotationReorderingInfo {
    _Bool _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    _Bool _field4;
};

struct SBIconListPredictedVisibleColumn {
    unsigned long long column;
    double confidence;
};

struct SBIconListPredictedVisibleRow {
    unsigned long long row;
    double confidence;
};

struct SBRootFolderPageStateTransitionSnapshot {
    long long _field1;
    long long _field2;
    double _field3;
};

struct SBRootFolderViewMetrics {
    struct CGRect _field1;
    struct CGRect _field2;
    struct CGRect _field3;
    struct CGRect _field4;
    struct CGRect _field5;
    struct CGRect _field6;
    struct CGRect _field7;
    double _field8;
    struct CGRect _field9;
    struct CGRect _field10;
    struct CGRect _field11;
    struct CGRect _field12;
};

struct SBRootFolderViewPageManagementLayoutMetrics {
    struct CGSize cellSpacing;
    double bottomMargin;
    double listViewScale;
};

struct SBTitledHomeScreenButtonMetrics {
    double minimumButtonWidth;
    double minimumButtonHeight;
    double minimumHorizontalPadding;
    double baselineToTop;
    double preferredTitlePointSize;
    double minimumTitlePointSize;
};

struct SBVisibleColumnRange {
    unsigned long long startIconListIndex;
    unsigned long long startColumnIndex;
    unsigned long long endIconListIndex;
    unsigned long long endColumnIndex;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct UIOffset {
    double horizontal;
    double vertical;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct os_activity_scope_state_s {
    unsigned long long opaque[2];
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    double value;
    _Bool inclusive;
} CDStruct_e3385c33;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
} CDStruct_d2b197d1;

typedef struct {
    long long _field1;
    struct CGPoint _field2;
    struct CGPoint _field3;
} CDStruct_3b09cf25;

typedef struct {
    CDStruct_e3385c33 start;
    CDStruct_e3385c33 end;
} CDStruct_3e878e9e;

typedef struct {
    double horizontalSpacing;
    struct SBIconImageInfo iconImageInfo;
} CDStruct_b3b36088;

typedef struct {
    struct CGRect _field1;
    struct CGRect _field2;
    struct CGRect _field3;
    struct CGRect _field4;
    struct CGRect _field5;
} CDStruct_cafad96f;

typedef struct {
    struct CGRect _field1;
    struct UIEdgeInsets _field2;
    struct CGRect _field3;
    struct CGRect _field4;
    struct CGRect _field5;
    struct CGRect _field6;
    double _field7;
    double _field8;
} CDStruct_e3cddd5c;

