//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HFEventBuilder;
@protocol HFLocationEventBuilder;

@interface HFEventBuilderLocationInterface
{
    HFEventBuilder<HFLocationEventBuilder> *_locationEventBuilder;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000025dc73
@property(readonly, nonatomic) _Bool locationCanBeEdited;
@property(readonly, nonatomic) _Bool isCustomLocationTrigger;
@property(retain, nonatomic) HFEventBuilder<HFLocationEventBuilder> *locationEventBuilder; // @synthesize locationEventBuilder=_locationEventBuilder;

@end

