//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDSActivityDescription : NSObject
{
    double _timeSubscribed;	// 8 = 0x8
    NSString *_activity;	// 16 = 0x10
    NSString *_subActivity;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000070d60
- (void).cxx_destruct;	// IMP=0x00200000000710e0
@property(retain, nonatomic) NSString *subActivity; // @synthesize subActivity=_subActivity;
@property(retain, nonatomic) NSString *activity; // @synthesize activity=_activity;
@property(nonatomic) double timeSubscribed; // @synthesize timeSubscribed=_timeSubscribed;
- (id)description;	// IMP=0x0010000000070f80
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000070e20
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000070d80

@end
