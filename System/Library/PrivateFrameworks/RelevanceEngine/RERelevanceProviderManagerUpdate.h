//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCopying-Protocol.h>

@class RERelevanceProvider;

@interface RERelevanceProviderManagerUpdate : NSObject <NSCopying>
{
    RERelevanceProvider *_provider;	// 8 = 0x8
    CDUnknownBlockType _completion;	// 16 = 0x10
}

+ (id)scheduledUpdateForAllProvidersAtDate:(id)arg1;	// IMP=0x0000000000006b2b
+ (id)scheduledUpdateForProvider:(id)arg1 atDate:(id)arg2;	// IMP=0x0000000000006ab0
+ (id)immediateUpdateForAllProviders;	// IMP=0x0000000000006a85
+ (id)immediateUpdateForProvider:(id)arg1;	// IMP=0x0000000000006a38
- (void).cxx_destruct;	// IMP=0x0000000000006d03
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) _Bool allProviders;
@property(readonly, nonatomic) RERelevanceProvider *provider;
- (unsigned long long)hash;	// IMP=0x0000000000006cb8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000006c43
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000006bee
- (id)initWithProvider:(id)arg1;	// IMP=0x0000000000006b83

@end
