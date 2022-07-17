//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Transparency/TLSMessage-Protocol.h>

@class NSData, NSMutableArray;

@interface SingleDataRecord <TLSMessage>
{
    _Bool _accountMismatch;	// 8 = 0x8
    unsigned long long _appVersion;	// 16 = 0x10
    NSData *_clientDataHash;	// 24 = 0x18
    unsigned long long _markedForDeletionMs;	// 32 = 0x20
    unsigned long long _addedMs;	// 40 = 0x28
    unsigned long long _expiryMs;	// 48 = 0x30
    unsigned long long _escrowExpiryMs;	// 56 = 0x38
    NSMutableArray *_extensions;	// 64 = 0x40
    unsigned long long _parsedLength;	// 72 = 0x48
}

+ (id)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000400c7
- (void).cxx_destruct;	// IMP=0x0000000000040944
@property unsigned long long parsedLength; // @synthesize parsedLength=_parsedLength;
@property(retain) NSMutableArray *extensions; // @synthesize extensions=_extensions;
@property unsigned long long escrowExpiryMs; // @synthesize escrowExpiryMs=_escrowExpiryMs;
@property unsigned long long expiryMs; // @synthesize expiryMs=_expiryMs;
@property _Bool accountMismatch; // @synthesize accountMismatch=_accountMismatch;
@property unsigned long long addedMs; // @synthesize addedMs=_addedMs;
@property unsigned long long markedForDeletionMs; // @synthesize markedForDeletionMs=_markedForDeletionMs;
@property(retain) NSData *clientDataHash; // @synthesize clientDataHash=_clientDataHash;
@property unsigned long long appVersion; // @synthesize appVersion=_appVersion;
- (id)description;	// IMP=0x0000000000040732
- (id)debugDescription;	// IMP=0x000000000004065c
- (id)data;	// IMP=0x000000000003feef
- (id)init;	// IMP=0x000000000003fe82

@end
