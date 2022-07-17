//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IMCore/PXChangeObserver-Protocol.h>

@class IMMomentShareCache, NSMutableDictionary, NSString;
@protocol IMMomentSharePresentationCacheDelegate;

@interface IMMomentSharePresentationCache : NSObject <PXChangeObserver>
{
    NSMutableDictionary *_cache;	// 8 = 0x8
    IMMomentShareCache *_momentShareCache;	// 16 = 0x10
    id <IMMomentSharePresentationCacheDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000006b831
@property(nonatomic) __weak id <IMMomentSharePresentationCacheDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_momentShareCacheDidChange:(id)arg1;	// IMP=0x000000000006b5a7
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x000000000006b53c
- (void)registerMomentShareURLString:(id)arg1;	// IMP=0x000000000006b230
- (void)registerMomentShareItemForMessage:(id)arg1;	// IMP=0x000000000006b1c1
- (id)statusPresentationForMomentShareURLString:(id)arg1;	// IMP=0x000000000006b158
- (id)initWithMomentShareCache:(id)arg1;	// IMP=0x000000000006b079
- (id)init;	// IMP=0x000000000006b070

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
