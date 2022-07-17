//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServicesCore/NSKeyedArchiverDelegate-Protocol.h>
#import <GeoServicesCore/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface GEOCapturedState : NSObject <NSKeyedArchiverDelegate, NSSecureCoding>
{
}

+ (id)fromStateData:(id)arg1;	// IMP=0x000000000000193d
+ (const char *)decoderType;	// IMP=0x0000000000001768
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000001760
- (id)archiver:(id)arg1 willEncodeObject:(id)arg2;	// IMP=0x0000000000001a9e
@property(readonly) NSData *stateData;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000018d0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000001770

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
