//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Navigation/MNVirtualGarageProvider-Protocol.h>
#import <Navigation/VGVirtualGarageObserver-Protocol.h>

@class NSString;
@protocol MNVirtualGarageProviderDelegate;

__attribute__((visibility("hidden")))
@interface MNVirtualGarageStandardProvider : NSObject <VGVirtualGarageObserver, MNVirtualGarageProvider>
{
    id <MNVirtualGarageProviderDelegate> _delegate;	// 8 = 0x8
    _Bool _isStarted;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000f825c
@property(nonatomic) __weak id <MNVirtualGarageProviderDelegate> virtualGarageDelegate; // @synthesize virtualGarageDelegate=_delegate;
- (void)virtualGarageDidUpdate:(id)arg1;	// IMP=0x00000000000f8198
- (void)dealloc;	// IMP=0x00000000000f815a
- (void)stopVirtualGarageUpdates;	// IMP=0x00000000000f80d4
- (void)startVirtualGarageUpdates;	// IMP=0x00000000000f804f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

