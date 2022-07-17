//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HeartRhythmUI/HRFeatureRegulatoryPanelDisplayable-Protocol.h>

@class NSAttributedString, NSString;
@protocol HRFeatureRegulatoryReenableFeatureActionDelegate;

@interface HRFeatureRegulatoryReenableFeatureItem : NSObject <HRFeatureRegulatoryPanelDisplayable>
{
    NSString *_productName;	// 8 = 0x8
    id <HRFeatureRegulatoryReenableFeatureActionDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002c40f
@property(nonatomic) __weak id <HRFeatureRegulatoryReenableFeatureActionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) NSString *productName; // @synthesize productName=_productName;
- (void)handleUserInteractionWithItemWithHostViewController:(id)arg1;	// IMP=0x000000000002c364
@property(readonly, nonatomic) long long cellAccessoryType;
@property(readonly, nonatomic) _Bool isInteractive;
@property(readonly, copy, nonatomic) NSAttributedString *valueString;
@property(readonly, copy, nonatomic) NSAttributedString *titleString;
- (id)initWithProductName:(id)arg1 delegate:(id)arg2;	// IMP=0x000000000002c12d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
