//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmailFoundation/EFCancelable-Protocol.h>

@class EFFuture, NSString;

@interface EFPromise : NSObject <EFCancelable>
{
    EFFuture *_future;	// 8 = 0x8
}

+ (id)promise;	// IMP=0x000000000000ddc9
- (void).cxx_destruct;	// IMP=0x000000000000df40
@property(readonly) EFFuture *future; // @synthesize future=_future;
- (void)cancel;	// IMP=0x000000000000df16
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x000000000000df08
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x000000000000de9d
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000000de4f
- (id)init;	// IMP=0x000000000000dddb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

