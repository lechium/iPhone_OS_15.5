//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, PFUbiquityKnowledgeVector;

__attribute__((visibility("hidden")))
@interface PFUbiquityPeerReceipt
{
    PFUbiquityKnowledgeVector *_kv;	// 88 = 0x58
    NSDate *_writeDate;	// 96 = 0x60
}

- (_Bool)writeFileToLocation:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002ebbb7
- (_Bool)loadFileFromLocation:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002eb634
- (id)description;	// IMP=0x00000000002eb5d1
- (void)dealloc;	// IMP=0x00000000002eb566
- (id)initWithLocalPeerID:(id)arg1 andReceiptFileLocation:(id)arg2;	// IMP=0x00000000002eb50f
- (id)initWithLocalPeerID:(id)arg1 andKnowledgeVector:(id)arg2 forPeerID:(id)arg3 storeName:(id)arg4 modelVersionHash:(id)arg5 andUbiquityRootLocation:(id)arg6;	// IMP=0x00000000002eb4b7
- (id)initWithLocalPeerID:(id)arg1 receiptPeerID:(id)arg2 storeName:(id)arg3 modelVersionHash:(id)arg4 andUbiquityRootLocation:(id)arg5;	// IMP=0x00000000002eb458
- (id)init;	// IMP=0x00000000002eb3f6

@end
