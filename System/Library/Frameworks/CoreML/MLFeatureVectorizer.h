//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreML/MLModelSpecificationLoader-Protocol.h>

@class NSArray, NSString;

@interface MLFeatureVectorizer <MLModelSpecificationLoader>
{
    NSArray *_output_array_shape;	// 8 = 0x8
    struct vector<std::pair<unsigned long, unsigned long>, std::allocator<std::pair<unsigned long, unsigned long>>> index_mapping;	// 16 = 0x10
    NSArray *_columnNameEncoding;	// 40 = 0x28
    NSArray *_dimensionEncoding;	// 48 = 0x30
}

+ (id)loadModelFromSpecification:(void *)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x000000000014bd6b
- (id).cxx_construct;	// IMP=0x000000000014bccf
- (void).cxx_destruct;	// IMP=0x000000000014bc73
@property(readonly, nonatomic) NSArray *dimensionEncoding; // @synthesize dimensionEncoding=_dimensionEncoding;
@property(readonly, nonatomic) NSArray *columnNameEncoding; // @synthesize columnNameEncoding=_columnNameEncoding;
- (id)vectorizeOneHotEncoderDict:(id)arg1 index:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000014b7d4
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000014ae22
- (id)initWith:(id)arg1 dimensionEncoding:(id)arg2 dataTransformerName:(id)arg3 inputDescription:(id)arg4 outputDescription:(id)arg5 orderedInputFeatureNames:(id)arg6 orderedOutputFeatureNames:(id)arg7 configuration:(id)arg8;	// IMP=0x000000000014a833

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

