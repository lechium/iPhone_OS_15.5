//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (MCUtilities)
+ (id)MCShortenedDictionary:(id)arg1;	// IMP=0x0000000000004b19
+ (id)MCShortenedArray:(id)arg1;	// IMP=0x0000000000004937
+ (id)MCShortenedData:(id)arg1;	// IMP=0x0000000000004745
+ (id)MCShortenedObject:(id)arg1;	// IMP=0x0000000000004685
+ (id)MCDictionaryFromFile:(id)arg1;	// IMP=0x0000000000003b49
- (id)MCDictionaryWithLeafValuesSetToValue:(id)arg1;	// IMP=0x0000000000006470
- (id)MCInsertedKeysFromDictionary:(id)arg1 withNewLeafValue:(id)arg2;	// IMP=0x00000000000060c7
- (id)MCRemovedKeysFromDictionary:(id)arg1;	// IMP=0x0000000000005d92
- (id)MCDictionarySubtractiveDeltaToCreateDictionary:(id)arg1;	// IMP=0x0000000000005aa2
- (id)MCDictionaryAdditiveDeltaToCreateDictionary:(id)arg1;	// IMP=0x00000000000057c4
- (_Bool)MCValidateUnionRestriction:(id)arg1 inRestrictions:(id)arg2 defaultRestrictions:(id)arg3;	// IMP=0x00000000000056af
- (_Bool)MCValidateIntersectionRestriction:(id)arg1 inRestrictions:(id)arg2 defaultRestrictions:(id)arg3;	// IMP=0x000000000000559a
- (_Bool)MCValidateValueRestriction:(id)arg1 inRestrictions:(id)arg2 defaultRestrictions:(id)arg3;	// IMP=0x00000000000053e1
- (_Bool)MCValidateBoolRestriction:(id)arg1 inRestrictions:(id)arg2 defaultRestrictions:(id)arg3;	// IMP=0x0000000000005228
- (_Bool)MCValidateRestrictions;	// IMP=0x0000000000004c91
- (id)MCShortenedPlistDescription;	// IMP=0x0000000000004627
- (id)MCRetainOptionalNonZeroLengthStringKey:(id)arg1 errorDomain:(id)arg2 invalidDataCode:(long long)arg3 invalidDataErrorString:(id)arg4 outError:(id *)arg5;	// IMP=0x000000000000449d
- (id)MCRetainRequiredNonZeroLengthStringKey:(id)arg1 errorDomain:(id)arg2 missingDataCode:(long long)arg3 missingDataErrorString:(id)arg4 invalidDataCode:(long long)arg5 invalidDataErrorString:(id)arg6 outError:(id *)arg7;	// IMP=0x00000000000042be
- (id)MCRetainOptionalObjectKey:(id)arg1 type:(Class)arg2 errorDomain:(id)arg3 invalidDataCode:(long long)arg4 invalidDataErrorString:(id)arg5 outError:(id *)arg6;	// IMP=0x0000000000004178
- (id)MCRetainRequiredObjectKey:(id)arg1 type:(Class)arg2 errorDomain:(id)arg3 missingDataCode:(long long)arg4 missingDataErrorString:(id)arg5 invalidDataCode:(long long)arg6 invalidDataErrorString:(id)arg7 outError:(id *)arg8;	// IMP=0x0000000000003fb6
- (id)MCDeepCopy;	// IMP=0x0000000000003fa2
- (id)MCDeepCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000003f90
- (id)MCMutableDeepCopy;	// IMP=0x0000000000003f7c
- (id)MCMutableDeepCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000003c70
- (_Bool)MCWriteToBinaryFile:(id)arg1 atomically:(_Bool)arg2;	// IMP=0x0000000000003984
- (_Bool)MCWriteToBinaryFile:(id)arg1;	// IMP=0x0000000000003906
@end

