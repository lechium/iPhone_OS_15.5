//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface WFVariableAggrandizement : NSObject
{
    NSDictionary *_dictionary;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000032f257
@property(readonly, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (unsigned long long)hash;	// IMP=0x000000000032f204
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000032f146
- (id)processedContentClasses:(id)arg1;	// IMP=0x000000000032f130
- (void)applyToContentCollection:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000032f11d
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000032ee71

@end
