//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MLModelDescriptionUtils : NSObject
{
}

+ (_Bool)validateAllFeatureDescriptions:(id)arg1 hasAnyFeatureTypeIn:(id)arg2 minimalCount:(unsigned long long)arg3 maximumCount:(unsigned long long)arg4 debugLabel:(id)arg5 error:(id *)arg6;	// IMP=0x0000000000145b77
+ (_Bool)saveModelDescription:(id)arg1 toSpecification:(void *)arg2 error:(id *)arg3;	// IMP=0x0000000000145a62
+ (void *)createModelDescription:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001453df
+ (void)copyFeatureDescriptionFrom:(id)arg1 to:(void *)arg2 error:(id *)arg3;	// IMP=0x0000000000145254
+ (void *)createFeatureTypeFromFeatureDescription:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000144f97
+ (void *)getSequenceFeatureTypeFromConstraint:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000144e22
+ (void *)getDictionaryFeatureTypeFromConstraint:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000144cef
+ (void *)getArrayFeatureTypeFromConstraint:(id)arg1;	// IMP=0x0000000000144abb
+ (void *)getImageFeatureTypeFromConstraint:(id)arg1;	// IMP=0x0000000000144a02
+ (void *)createMetaData:(id)arg1;	// IMP=0x00000000001441bb

@end
