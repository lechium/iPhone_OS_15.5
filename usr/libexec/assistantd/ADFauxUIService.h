//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_dispatch_queue;

@interface ADFauxUIService
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000020e8d6
- (void)_unhandledCommand:(id)arg1 error:(id)arg2 forDomain:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000020e843
- (void)_unhandledCommand:(id)arg1 forDomain:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000020e829
- (void)_appPunchOutHandler:(id)arg1 forDomain:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000020e817
- (void)handleCommand:(id)arg1 forDomain:(id)arg2 executionContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000020e29c
- (_Bool)implementsCommand:(id)arg1 forDomain:(id)arg2;	// IMP=0x001000000020e294
- (id)commandsForDomain:(id)arg1;	// IMP=0x001000000020e20d
- (id)domains;	// IMP=0x001000000020e1a3
- (id)handle;	// IMP=0x001000000020e19a
- (id)init;	// IMP=0x001000000020e0d6

@end
