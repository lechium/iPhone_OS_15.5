//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface NTKPillView : UIView
{
    NSArray *_pillColors;	// 8 = 0x8
    unsigned long long _colorLimitCount;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000030ae39
@property(nonatomic) unsigned long long colorLimitCount; // @synthesize colorLimitCount=_colorLimitCount;
@property(copy, nonatomic) NSArray *pillColors; // @synthesize pillColors=_pillColors;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x000000000030aa5e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000030a8e4

@end

