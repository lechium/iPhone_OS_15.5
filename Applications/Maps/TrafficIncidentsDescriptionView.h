//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, _MKUILabel;

__attribute__((visibility("hidden")))
@interface TrafficIncidentsDescriptionView : UIView
{
    _MKUILabel *_label;	// 8 = 0x8
    NSString *_incidentString;	// 16 = 0x10
    _MKUILabel *_hiddenCenteringLabel;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000084c17a
@property(retain, nonatomic) _MKUILabel *hiddenCenteringLabel; // @synthesize hiddenCenteringLabel=_hiddenCenteringLabel;
@property(retain, nonatomic) NSString *incidentString; // @synthesize incidentString=_incidentString;
- (id)init;	// IMP=0x001000000084ba27

@end

