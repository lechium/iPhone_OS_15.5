//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface CKPrettyError : NSError
{
}

+ (id)descriptionForError:(id)arg1;	// IMP=0x00000000001648b9
+ (id)itemErrorFromError:(id)arg1 forID:(id)arg2;	// IMP=0x0000000000164764
+ (id)errorWithCode:(long long)arg1 path:(id)arg2 format:(id)arg3;	// IMP=0x000000000016461b
+ (id)errorWithCode:(long long)arg1 userInfo:(id)arg2 format:(id)arg3;	// IMP=0x00000000001644d1
+ (id)errorWithCode:(long long)arg1 format:(id)arg2;	// IMP=0x0000000000164396
+ (id)_errorDomain;	// IMP=0x0000000000164389
+ (id)descriptionForError:(id)arg1 paths:(_Bool)arg2;	// IMP=0x0000000000166760
+ (id)secureCodableError:(id)arg1;	// IMP=0x0000000000166410
+ (id)errorWithDictionaryRepresentation:(id)arg1;	// IMP=0x00000000001661a8
+ (id)dictionaryRepresentationForError:(id)arg1;	// IMP=0x0000000000165ee3
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 path:(id)arg3 format:(id)arg4;	// IMP=0x0000000000165d0a
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 format:(id)arg3;	// IMP=0x0000000000165b79
+ (id)errorWithCode:(long long)arg1 error:(id)arg2 URL:(id)arg3 format:(id)arg4;	// IMP=0x0000000000165a13
+ (id)errorWithCode:(long long)arg1 error:(id)arg2 path:(id)arg3 format:(id)arg4;	// IMP=0x00000000001658ac
+ (id)errorWithCode:(long long)arg1 URL:(id)arg2 format:(id)arg3;	// IMP=0x0000000000165763
+ (id)errorWithCode:(long long)arg1 error:(id)arg2 format:(id)arg3;	// IMP=0x000000000016561a
+ (id)errorWithCode:(long long)arg1 userInfo:(id)arg2 error:(id)arg3 format:(id)arg4 arguments:(struct __va_list_tag [1])arg5;	// IMP=0x000000000016553b
+ (id)errorWithCode:(long long)arg1 userInfo:(id)arg2 error:(id)arg3 format:(id)arg4;	// IMP=0x0000000000165490
+ (id)errorWithCode:(long long)arg1 userInfo:(id)arg2 error:(id)arg3 path:(id)arg4 URL:(id)arg5 description:(id)arg6;	// IMP=0x00000000001652be
+ (id)sanitizedError:(id)arg1;	// IMP=0x00000000001651d5
+ (_Bool)isError:(id)arg1 withCodes:(id)arg2;	// IMP=0x0000000000164f9a
+ (_Bool)isError:(id)arg1 withCode:(long long)arg2;	// IMP=0x0000000000164ee1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000164e2b
- (id)description;	// IMP=0x00000000001648ff
- (void)dealloc;	// IMP=0x00000000001648d0
- (id)CKPartialErrorDescription;	// IMP=0x0000000000166ba8

@end

