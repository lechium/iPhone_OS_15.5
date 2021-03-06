//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ExposureNotification/NSCopying-Protocol.h>
#import <ExposureNotification/NSSecureCoding-Protocol.h>

@class NSURL;

@interface ENRegionTravelerServerDownloadConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    NSURL *_tekTravelerDownloadBaseURL;	// 8 = 0x8
    NSURL *_tekTravelerDownloadIndexURL;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000011ec6
- (void).cxx_destruct;	// IMP=0x0000000000011ee2
@property(readonly, copy, nonatomic) NSURL *tekTravelerDownloadIndexURL; // @synthesize tekTravelerDownloadIndexURL=_tekTravelerDownloadIndexURL;
@property(readonly, copy, nonatomic) NSURL *tekTravelerDownloadBaseURL; // @synthesize tekTravelerDownloadBaseURL=_tekTravelerDownloadBaseURL;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000011ebb
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000011d92
- (id)initWithServerResponseDictionary:(id)arg1;	// IMP=0x0000000000011bf2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000011b84

@end

