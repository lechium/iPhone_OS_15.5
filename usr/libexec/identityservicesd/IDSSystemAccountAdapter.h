//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface IDSSystemAccountAdapter : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000060f90
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)_systemAccountRepresentationOfACAccount:(id)arg1 DSIDKey:(id)arg2;	// IMP=0x0010000000060d70
- (id)_firstAccountInStore:(id)arg1 withType:(id)arg2 matchingCriteria:(CDUnknownBlockType)arg3;	// IMP=0x00100000000609b0
- (id)_ACAccountWithTypeIdentifier:(id)arg1 matchingCriteria:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x00100000000608a0
- (id)_systemAccountWithIdentifier:(id)arg1 DSIDKey:(id)arg2 criteria:(CDUnknownBlockType)arg3 error:(id *)arg4;	// IMP=0x0010000000060500
- (void)_ACAccountWithTypeIdentifier:(id)arg1 matchingCriteria:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000060460
- (void)_systemAccountWithIdentifier:(id)arg1 DSIDKey:(id)arg2 criteria:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000005ffd0
- (id)iTunesSystemAccountWithError:(id *)arg1;	// IMP=0x001000000005ff20
- (id)iCloudSystemAccountWithError:(id *)arg1;	// IMP=0x001000000005fe40
- (void)iTunesSystemAccountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000005fd60
- (void)iCloudSystemAccountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000005fc50
- (id)initWithQueue:(id)arg1;	// IMP=0x001000000005fb90

@end

