//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NSCopying-Protocol.h>

@class NSString, NUVersion;

@interface NUIdentifier : NSObject <NSCopying>
{
    NSString *_nameSpace;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NUVersion *_version;	// 24 = 0x18
}

+ (id)validNameRegularExpression;	// IMP=0x000000000019244d
+ (_Bool)validateName:(id)arg1 error:(out id *)arg2;	// IMP=0x0000000000191d38
+ (id)validNameSpaceRegularExpression;	// IMP=0x0000000000191d08
+ (_Bool)validateNameSpace:(id)arg1 error:(out id *)arg2;	// IMP=0x00000000001915f3
+ (id)identifierRegularExpression;	// IMP=0x00000000001915c3
+ (_Bool)validateIdentifierString:(id)arg1 space:(out id *)arg2 name:(out id *)arg3 version:(out id *)arg4 error:(out id *)arg5;	// IMP=0x0000000000190d6e
+ (_Bool)validateIdentifierString:(id)arg1 error:(out id *)arg2;	// IMP=0x00000000001905a9
+ (id)identifierWithString:(id)arg1 error:(out id *)arg2;	// IMP=0x000000000018fecc
+ (id)latestIdentifierWithNameSpace:(id)arg1 name:(id)arg2;	// IMP=0x000000000018fdfb
+ (id)latestIdentifierWithName:(id)arg1;	// IMP=0x000000000018fd7e
+ (id)defaultNameSpace;	// IMP=0x000000000018fd27
- (void).cxx_destruct;	// IMP=0x000000000018fcea
@property(readonly) NUVersion *version; // @synthesize version=_version;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) NSString *nameSpace; // @synthesize nameSpace=_nameSpace;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000018fca3
- (_Bool)isEqualToIdentifier:(id)arg1;	// IMP=0x000000000018fb40
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000018fae3
- (unsigned long long)hash;	// IMP=0x000000000018fa61
- (id)identifierWithVersion:(id)arg1;	// IMP=0x000000000018f688
@property(readonly) NSString *stringRepresentation;
- (id)debugDescription;	// IMP=0x000000000018f4cc
- (id)description;	// IMP=0x000000000018f4ba
- (id)initWithNameSpace:(id)arg1 name:(id)arg2 version:(id)arg3;	// IMP=0x000000000018eaba
- (id)initWithName:(id)arg1 version:(id)arg2;	// IMP=0x000000000018ea22
- (id)initWithName:(id)arg1;	// IMP=0x000000000018e9be
- (id)init;	// IMP=0x000000000018e64b

@end
