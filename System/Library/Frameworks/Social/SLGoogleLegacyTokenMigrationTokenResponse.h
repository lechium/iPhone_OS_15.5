//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SLGoogleLegacyTokenMigrationTokenResponse
{
    NSString *_token;	// 32 = 0x20
    NSString *_errorMessage;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000001d83e
@property(readonly) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(readonly) NSString *token; // @synthesize token=_token;
- (id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3;	// IMP=0x000000000001d5e9

@end

