//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, PXStoryStyleConfiguration;

@interface PXStoryStyleConfigurationList : NSObject
{
    NSArray *_autoEditStyleConfigurations;	// 8 = 0x8
    PXStoryStyleConfiguration *_initialStyleConfiguration;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000633864
@property(readonly, nonatomic) PXStoryStyleConfiguration *initialStyleConfiguration; // @synthesize initialStyleConfiguration=_initialStyleConfiguration;
@property(readonly, copy, nonatomic) NSArray *autoEditStyleConfigurations; // @synthesize autoEditStyleConfigurations=_autoEditStyleConfigurations;
- (unsigned long long)hash;	// IMP=0x00000000006337c3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000633678
- (id)initWithAutoEditStyleConfigurations:(id)arg1 initialStyleConfiguration:(id)arg2;	// IMP=0x00000000006335d4
- (id)init;	// IMP=0x00000000006335b9

@end
