//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/CATTaskResultObject.h>

@class NSData;

@interface DMFFetchScreenshotResultObject : CATTaskResultObject
{
    NSData *_screenshotData;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000026cdf
- (void).cxx_destruct;	// IMP=0x0000000000026e6a
@property(readonly, nonatomic) NSData *screenshotData; // @synthesize screenshotData=_screenshotData;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000026dbe
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000026ce7
- (id)initWithData:(id)arg1;	// IMP=0x0000000000026c65

@end
