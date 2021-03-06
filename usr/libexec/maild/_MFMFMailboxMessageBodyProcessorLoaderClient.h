//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EFFuture, EFPromise, MFMailMessage, NSString;

@interface _MFMFMailboxMessageBodyProcessorLoaderClient : NSObject
{
    EFPromise *_promise;	// 8 = 0x8
    MFMailMessage *_message;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000840a4
@property(readonly, nonatomic) MFMailMessage *message; // @synthesize message=_message;
- (void)notifyContentsUnavailableForMessage:(id)arg1 error:(id)arg2;	// IMP=0x0010000000084094
- (void)notifyContentsAvailable:(id)arg1 forMessage:(id)arg2;	// IMP=0x001000000008408e
- (void)notifyFullMessageContentsAvailableForMessage:(id)arg1;	// IMP=0x0010000000084077
- (void)notifyFullMessageContentsUnavailableForMessage:(id)arg1 error:(id)arg2;	// IMP=0x001000000008405d
- (_Bool)wantsContentsOfType:(int)arg1;	// IMP=0x0010000000084051
- (double)ordering;	// IMP=0x0010000000083f92
- (long long)priority;	// IMP=0x0010000000083f85
@property(readonly, nonatomic) EFFuture *future;
- (id)initWithMessage:(id)arg1;	// IMP=0x0010000000083ec2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

