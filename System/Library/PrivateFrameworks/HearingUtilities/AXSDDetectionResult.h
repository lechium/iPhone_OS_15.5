//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXSDTimeStamp, NSString;

@interface AXSDDetectionResult : NSObject
{
    AXSDTimeStamp *_timestamp;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    double _confidence;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000007112b
@property(readonly) NSString *debug;
@property(readonly) double confidence;
@property(readonly) NSString *identifier;
@property(readonly) AXSDTimeStamp *timestamp;
- (id)initWithResult:(id)arg1;	// IMP=0x0000000000070f9a
- (id)initWithTimeStamp:(id)arg1 identifier:(id)arg2 confidence:(double)arg3;	// IMP=0x0000000000070ef2

@end

