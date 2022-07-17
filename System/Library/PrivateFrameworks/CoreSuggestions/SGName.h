//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SGExtractionInfo;

@interface SGName
{
    NSString *_fullName;	// 8 = 0x8
    NSString *_firstName;	// 16 = 0x10
    NSString *_middleName;	// 24 = 0x18
    NSString *_lastName;	// 32 = 0x20
    NSString *_prefix;	// 40 = 0x28
    NSString *_suffix;	// 48 = 0x30
    SGExtractionInfo *_extractionInfo;	// 56 = 0x38
}

+ (id)nameWithFirstName:(id)arg1 withRecordId:(id)arg2 origin:(id)arg3;	// IMP=0x000000000005a000
+ (id)nameWithFirstName:(id)arg1 lastName:(id)arg2 withRecordId:(id)arg3 origin:(id)arg4;	// IMP=0x0000000000059ea7
+ (id)nameWithFirstName:(id)arg1 lastName:(id)arg2 middleName:(id)arg3 fullName:(id)arg4 prefix:(id)arg5 suffix:(id)arg6 withRecordId:(id)arg7 origin:(id)arg8;	// IMP=0x0000000000059d7a
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000059d72
- (void).cxx_destruct;	// IMP=0x0000000000059cec
@property(readonly, nonatomic) SGExtractionInfo *extractionInfo; // @synthesize extractionInfo=_extractionInfo;
@property(readonly, nonatomic) NSString *suffix; // @synthesize suffix=_suffix;
@property(readonly, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property(readonly, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(readonly, nonatomic) NSString *middleName; // @synthesize middleName=_middleName;
@property(readonly, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(readonly, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
- (id)description;	// IMP=0x0000000000059acd
- (unsigned long long)hash;	// IMP=0x0000000000059a5b
- (_Bool)isEqualToName:(id)arg1;	// IMP=0x00000000000599f3
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005998b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000059865
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000059659
- (id)name;	// IMP=0x0000000000059644
- (id)initWithFirstName:(id)arg1 middleName:(id)arg2 lastName:(id)arg3 fullName:(id)arg4 prefix:(id)arg5 suffix:(id)arg6 recordId:(id)arg7 origin:(id)arg8;	// IMP=0x00000000000594ec
- (id)initWithFirstName:(id)arg1 middleName:(id)arg2 lastName:(id)arg3 fullName:(id)arg4 prefix:(id)arg5 suffix:(id)arg6 recordId:(id)arg7 origin:(id)arg8 extractionInfo:(id)arg9;	// IMP=0x0000000000059270

@end
