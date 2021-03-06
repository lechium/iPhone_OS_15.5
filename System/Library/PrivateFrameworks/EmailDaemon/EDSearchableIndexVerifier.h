//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EFLoggable-Protocol.h>
#import <EmailDaemon/EFSignpostable-Protocol.h>

@class NSString;
@protocol EDSearchableIndexVerifierDataSource, OS_os_activity;

@interface EDSearchableIndexVerifier : NSObject <EFLoggable, EFSignpostable>
{
    id <EDSearchableIndexVerifierDataSource> _dataSource;	// 8 = 0x8
    NSObject<OS_os_activity> *_indexVerificationActivity;	// 16 = 0x10
}

+ (id)signpostLog;	// IMP=0x000000000012757d
+ (id)log;	// IMP=0x00000000001274a0
- (void).cxx_destruct;	// IMP=0x000000000012a8fb
@property(retain, nonatomic) NSObject<OS_os_activity> *indexVerificationActivity; // @synthesize indexVerificationActivity=_indexVerificationActivity;
@property(nonatomic) __weak id <EDSearchableIndexVerifierDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)_missingTransactionIDsFromTransactionIDs:(id)arg1;	// IMP=0x000000000012a1a3
- (unsigned long long)_findMissingTransactionIDs:(id)arg1 dataSource:(id)arg2;	// IMP=0x0000000000129dee
- (id)_verifyDataSamples:(id)arg1;	// IMP=0x00000000001296e9
- (void)verifyDataSamplesWithCompletionHandler:(CDUnknownBlockType)arg1 scheduler:(id)arg2;	// IMP=0x0000000000128bc9
- (id)_verifySamples:(id)arg1;	// IMP=0x000000000012870a
- (void)_addFailingSamples:(id)arg1 toResultDictionary:(id)arg2;	// IMP=0x0000000000128573
- (id)_failingSamples:(id)arg1 tester:(id)arg2;	// IMP=0x0000000000127745
- (id)initWithDataSource:(id)arg1;	// IMP=0x00000000001276a3
@property(readonly) unsigned long long signpostID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

