//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/PMLTransformerProtocol-Protocol.h>

@class NSDictionary, NSString;

@interface SGNameMappingTransformer : NSObject <PMLTransformerProtocol>
{
    _Bool _forNameDetector;	// 8 = 0x8
    NSDictionary *_nameMappings;	// 16 = 0x10
    NSString *_tokenToIgnore;	// 24 = 0x18
    int _minimumConfidence;	// 32 = 0x20
    CDUnknownBlockType _confidenceMapper;	// 40 = 0x28
}

+ (id)withFullNameMapping:(id)arg1 firstNameMapping:(id)arg2 lastNameMapping:(id)arg3 minimumConfidence:(int)arg4 confidenceMapper:(CDUnknownBlockType)arg5 tokenToIgnore:(id)arg6 andPossessive:(id)arg7;	// IMP=0x000000000008a095
+ (id)withFullNameMapping:(id)arg1 firstNameMapping:(id)arg2 lastNameMapping:(id)arg3 andPossessive:(id)arg4;	// IMP=0x000000000008a061
+ (id)instanceForNameDetector;	// IMP=0x0000000000089f4c
- (void).cxx_destruct;	// IMP=0x00000000000898c7
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000897ee
- (_Bool)isEqualToNameMappingTransformer:(id)arg1;	// IMP=0x000000000008976c
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;	// IMP=0x0000000000089681
- (id)toPlistWithChunks:(id)arg1;	// IMP=0x0000000000089578
- (_Bool)isPossessive:(id)arg1;	// IMP=0x000000000008955c
- (id)transform:(id)arg1;	// IMP=0x0000000000088b39
- (id)nameMappingForToken:(id)arg1 withConfidence:(int *)arg2;	// IMP=0x000000000008893c
- (id)initWithNameMappings:(id)arg1 minimumConfidence:(int)arg2 confidenceMapper:(CDUnknownBlockType)arg3 tokenToIgnore:(id)arg4 forNameDetector:(_Bool)arg5;	// IMP=0x0000000000088546

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

