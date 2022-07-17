//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MusicLibrary/NSCopying-Protocol.h>
#import <MusicLibrary/NSSecureCoding-Protocol.h>

@class ML3DatabasePrivacyContext, NSString;

@interface ML3ClientImportSessionConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _allowAccountMerging;	// 8 = 0x8
    int _sourceType;	// 12 = 0xc
    NSString *_libraryPath;	// 16 = 0x10
    unsigned long long _operationCount;	// 24 = 0x18
    ML3DatabasePrivacyContext *_privacyContext;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000176899
- (void).cxx_destruct;	// IMP=0x0000000000176889
@property(nonatomic) ML3DatabasePrivacyContext *privacyContext; // @synthesize privacyContext=_privacyContext;
@property(nonatomic) _Bool allowAccountMerging; // @synthesize allowAccountMerging=_allowAccountMerging;
@property(nonatomic) unsigned long long operationCount; // @synthesize operationCount=_operationCount;
@property(nonatomic) int sourceType; // @synthesize sourceType=_sourceType;
@property(copy, nonatomic) NSString *libraryPath; // @synthesize libraryPath=_libraryPath;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000176786
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000176689
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000017667e
- (id)init;	// IMP=0x00000000001765e8

@end
