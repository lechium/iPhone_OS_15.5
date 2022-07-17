//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface VOSOutputEvent : NSObject
{
    NSString *_rawValue;	// 8 = 0x8
    _Bool _supportsSoundEffect;	// 16 = 0x10
    _Bool _supportsHaptic;	// 17 = 0x11
}

+ (id)eventWithStringValue:(id)arg1;	// IMP=0x000000000001144c
+ (id)allOutputEvents;	// IMP=0x000000000001097f
+ (id)SensitiveContent;	// IMP=0x000000000001090b
+ (id)TouchIDFailed;	// IMP=0x0000000000010894
+ (id)TouchIDAuthenticated;	// IMP=0x000000000001081d
+ (id)ReachabilityDidEnd;	// IMP=0x00000000000107a9
+ (id)ReachabilityDidBegin;	// IMP=0x0000000000010735
+ (id)DockDidDisappear;	// IMP=0x00000000000106c1
+ (id)DockDidAppear;	// IMP=0x000000000001064d
+ (id)ItemMemorizationInProgress;	// IMP=0x00000000000105d9
+ (id)ItemMemorizationFailed;	// IMP=0x0000000000010565
+ (id)BrailleDisplayDisconnected;	// IMP=0x00000000000104f1
+ (id)BrailleDisplayConnected;	// IMP=0x000000000001047d
+ (id)FolderDidClose;	// IMP=0x0000000000010409
+ (id)FolderDidOpen;	// IMP=0x0000000000010395
+ (id)FolderWillOpen;	// IMP=0x0000000000010321
+ (id)CollaborationOccurred;	// IMP=0x00000000000102ad
+ (id)ScreenDidChange;	// IMP=0x0000000000010239
+ (id)ItemMemorizationSucceeded;	// IMP=0x00000000000101c2
+ (id)KeyboardDisappeared;	// IMP=0x000000000001014b
+ (id)KeyboardAppeared;	// IMP=0x00000000000100d4
+ (id)InsertionPointDidMove;	// IMP=0x000000000001005d
+ (id)ScreenDidTurnOff;	// IMP=0x000000000000ffe6
+ (id)ItemDidLoad;	// IMP=0x000000000000ff6f
+ (id)ItemIsLoading;	// IMP=0x000000000000fef8
+ (id)AutofillDidDismiss;	// IMP=0x000000000000fe81
+ (id)AutofillDidAppear;	// IMP=0x000000000000fe0a
+ (id)PopoverDidAppear;	// IMP=0x000000000000fd93
+ (id)AlertDidAppear;	// IMP=0x000000000000fd1c
+ (id)TVDidEndInteractionWithRotor;	// IMP=0x000000000000fca8
+ (id)TVDidBeginInteractionWithRotor;	// IMP=0x000000000000fc34
+ (id)DidDisableQuickNav;	// IMP=0x000000000000fbc0
+ (id)DidEnableQuickNav;	// IMP=0x000000000000fb4c
+ (id)DidWrapForwards;	// IMP=0x000000000000fad8
+ (id)DidWrapBackwards;	// IMP=0x000000000000fa64
+ (id)DidReorderItem;	// IMP=0x000000000000f9f0
+ (id)DidChangeVolume;	// IMP=0x000000000000f97c
+ (id)DidEnterTouchContainer;	// IMP=0x000000000000f908
+ (id)DidSyncWithSystemFocus;	// IMP=0x000000000000f894
+ (id)DidLeaveTargetArea;	// IMP=0x000000000000f820
+ (id)DidEnterTargetArea;	// IMP=0x000000000000f7ac
+ (id)DidRecognizeMLContent;	// IMP=0x000000000000f738
+ (id)UnknownCommand;	// IMP=0x000000000000f6c1
+ (id)DidChangeTextSelectionDirection;	// IMP=0x000000000000f64a
+ (id)DidEnterSecureText;	// IMP=0x000000000000f5d3
+ (id)NextRotorProgress;	// IMP=0x000000000000f55f
+ (id)PreviousRotorProgress;	// IMP=0x000000000000f4eb
+ (id)DidSelectNextRotor;	// IMP=0x000000000000f474
+ (id)DidSelectPreviousRotor;	// IMP=0x000000000000f3fd
+ (id)DidBeginPassthrough;	// IMP=0x000000000000f386
+ (id)DidSelectAutofill;	// IMP=0x000000000000f30f
+ (id)InteractOut;	// IMP=0x000000000000f29b
+ (id)InteractIn;	// IMP=0x000000000000f227
+ (id)IsInteractable;	// IMP=0x000000000000f1b0
+ (id)NoItemExists;	// IMP=0x000000000000f139
+ (id)BoundaryEncountered;	// IMP=0x000000000000f0c2
+ (id)DidScrollByPage;	// IMP=0x000000000000f04b
+ (id)DidFocusOnElement;	// IMP=0x000000000000efd4
+ (id)NoResultsFound;	// IMP=0x000000000000ef5d
+ (id)DidActivateElement;	// IMP=0x000000000000eee6
- (void).cxx_destruct;	// IMP=0x00000000000116f9
@property(nonatomic) _Bool supportsHaptic; // @synthesize supportsHaptic=_supportsHaptic;
@property(nonatomic) _Bool supportsSoundEffect; // @synthesize supportsSoundEffect=_supportsSoundEffect;
- (id)description;	// IMP=0x0000000000011636
@property(readonly, nonatomic) NSString *localizedName;
@property(readonly, nonatomic) NSString *rawValue;
- (id)_initOutputEventWithRawValue:(id)arg1 supportsSoundEffect:(_Bool)arg2 supportsHaptic:(_Bool)arg3;	// IMP=0x000000000000ee44

@end
