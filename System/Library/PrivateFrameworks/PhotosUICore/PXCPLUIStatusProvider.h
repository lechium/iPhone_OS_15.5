//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class NSDate, NSString, PXCPLActionManager, PXCPLUIStatus, PXObservable;
@protocol PXCPLStatusProvider;

@interface PXCPLUIStatusProvider <PXChangeObserver>
{
    PXCPLActionManager *_actionManager;	// 8 = 0x8
    PXObservable<PXCPLStatusProvider> *_statusProvider;	// 16 = 0x10
    PXCPLUIStatus *_status;	// 24 = 0x18
    NSDate *_currentDateForTesting;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000009a0ee2
@property(copy, nonatomic) NSDate *currentDateForTesting; // @synthesize currentDateForTesting=_currentDateForTesting;
@property(readonly, nonatomic) PXCPLUIStatus *status; // @synthesize status=_status;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000009a0dff
- (void)_updateStatus;	// IMP=0x00000000009a0da8
- (void)_statusDidChange:(id)arg1;	// IMP=0x000000000099f3f5
- (id)initWithActionManager:(id)arg1 statusProvider:(id)arg2;	// IMP=0x000000000099f27a
- (id)initWithActionManager:(id)arg1;	// IMP=0x000000000099f157
- (id)init;	// IMP=0x000000000099f143

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

