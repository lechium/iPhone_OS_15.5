//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DTTapConfig;

@interface DTTapMessageHandler : NSObject
{
    DTTapConfig *_config;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000442ba
@property(readonly, retain, nonatomic) DTTapConfig *config; // @synthesize config=_config;
- (void)stop;	// IMP=0x00000000000442aa
- (id)messageReceived:(id)arg1;	// IMP=0x000000000004409b
- (id)initWithConfig:(id)arg1;	// IMP=0x0000000000044029

@end

