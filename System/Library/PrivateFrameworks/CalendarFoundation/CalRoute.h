//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarFoundation/NSSecureCoding-Protocol.h>

@class CalLocation, NSString;

@interface CalRoute : NSObject <NSSecureCoding>
{
    CalLocation *_start;	// 8 = 0x8
    CalLocation *_end;	// 16 = 0x10
    double _duration;	// 24 = 0x18
    NSString *_route;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000123d3
- (void).cxx_destruct;	// IMP=0x000000000006191b
@property(copy) NSString *route; // @synthesize route=_route;
@property double duration; // @synthesize duration=_duration;
@property(retain) CalLocation *end; // @synthesize end=_end;
@property(retain) CalLocation *start; // @synthesize start=_start;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000617db
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000123dc
- (id)description;	// IMP=0x0000000000012a53

@end
