//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKit/NSSecureCoding-Protocol.h>
#import <WebKit/WKObject-Protocol.h>

@class NSDate, NSString, NSURL, _WKFrameHandle;

@interface _WKResourceLoadInfo : NSObject <WKObject, NSSecureCoding>
{
    struct ObjectStorage<API::ResourceLoadInfo> _info;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002e1343
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002e16b6
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002e134b
@property(readonly) struct Object *_apiObject;
@property(readonly, nonatomic) long long resourceType;
@property(readonly, nonatomic) _Bool loadedFromCache;
@property(readonly, nonatomic) NSDate *eventTimestamp;
@property(readonly, nonatomic) NSString *originalHTTPMethod;
@property(readonly, nonatomic) NSURL *originalURL;
@property(readonly, nonatomic) _WKFrameHandle *parentFrame;
@property(readonly, nonatomic) _WKFrameHandle *frame;
@property(readonly, nonatomic) unsigned long long resourceLoadID;
- (void)dealloc;	// IMP=0x00000000002e10fe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

