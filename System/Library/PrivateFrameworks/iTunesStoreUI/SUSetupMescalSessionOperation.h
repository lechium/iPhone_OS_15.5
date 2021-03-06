//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class SSURLRequestProperties, SUMescalSession;

@interface SUSetupMescalSessionOperation : ISOperation
{
    SSURLRequestProperties *_requestProperties;	// 96 = 0x60
    SUMescalSession *_session;	// 104 = 0x68
}

- (id)_setupSAPWithData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000012d1d4
- (id)_setupSAPCertificate:(id *)arg1;	// IMP=0x000000000012ceae
- (_Bool)_isMescalEnabled;	// IMP=0x000000000012cb1b
- (void)run;	// IMP=0x000000000012c7d2
@property(readonly) SUMescalSession *mescalSession;
- (void)dealloc;	// IMP=0x000000000012c725
- (id)initWithURLRequestProperties:(id)arg1;	// IMP=0x000000000012c6c7

@end

