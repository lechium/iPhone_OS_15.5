//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSReading/TSKApplicationDelegate-Protocol.h>

@class NSString;
@protocol TSKCompatibilityDelegate;

@interface TSKApplicationDelegate : NSObject <TSKApplicationDelegate>
{
    id <TSKCompatibilityDelegate> _compatibilityDelegate;	// 8 = 0x8
}

+ (id)documentDirectoryPath;	// IMP=0x000000000007e8db
+ (void)setSurrogateDelegate:(id)arg1;	// IMP=0x000000000007e6b9
+ (id)sharedDelegate;	// IMP=0x000000000007e699
+ (_Bool)isUnitTesting;	// IMP=0x000000000007e691
@property(retain, nonatomic) id <TSKCompatibilityDelegate> compatibilityDelegate; // @synthesize compatibilityDelegate=_compatibilityDelegate;
- (id)toolbarButtonForModalDoneWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x000000000007eda8
@property(readonly, getter=isInBackground) _Bool inBackground;
@property(readonly, getter=isActivating) _Bool activating;
- (_Bool)shouldGenerateGuidesForOffscreenLayouts;	// IMP=0x000000000007ed90
@property(readonly, nonatomic) _Bool performanceModeEnabled;
@property(readonly, nonatomic) _Bool designModeEnabled;
- (id)defaultHyperlinkURL;	// IMP=0x000000000007ed78
- (_Bool)openURL:(id)arg1 sourceDocumentRoot:(id)arg2;	// IMP=0x000000000007ecf3
- (_Bool)openURL:(id)arg1;	// IMP=0x000000000007ecdf
- (id)validURLSchemes;	// IMP=0x000000000007ec5a
- (id)invalidURLSchemes;	// IMP=0x000000000007ebd5
- (id)appChartPropertyOverrides;	// IMP=0x000000000007eb50
- (id)previewImageForType:(id)arg1;	// IMP=0x000000000007eacb
- (_Bool)shouldValidateMasterLayoutWhileInsertingRows;	// IMP=0x000000000007eac3
- (_Bool)supportsScrollingInPhoneCommentUI;	// IMP=0x000000000007eabb
- (_Bool)supportsRTL;	// IMP=0x000000000007eab3
- (_Bool)shouldRenderCurvedShadow;	// IMP=0x000000000007eaab
- (_Bool)shouldRenderContactShadow;	// IMP=0x000000000007eaa3
- (struct CGRect)applicationToolbarFrame;	// IMP=0x000000000007ea85
@property(readonly, nonatomic) _Bool isCanvasFullScreen;
@property(readonly, nonatomic) _Bool centerOnInitialSelection;
- (id)createCompatibilityDelegate;	// IMP=0x000000000007e926
@property(readonly, nonatomic) NSString *templateTypeDisplayName;
@property(readonly, nonatomic) NSString *documentTypeDisplayName;
@property(readonly, nonatomic) NSString *applicationName;
- (id)init;	// IMP=0x000000000007e6c6
- (void)dealloc;	// IMP=0x000000000007e656
@property(readonly, nonatomic) _Bool textInspectorShowsMoreSubpane;
@property(readonly, nonatomic) _Bool tableCellInspectorShowsNaturalAlignment;
@property(readonly, nonatomic) _Bool tableHeaderInspectorShowsRepeatHeaderRowsSwitch;
@property(readonly, nonatomic) _Bool tableHeaderInspectorShowsFreezeHeaderColumnsSwitch;
@property(readonly, nonatomic) _Bool tableHeaderInspectorShowsFreezeHeaderRowsSwitch;

@end
