//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKit/NSSecureCoding-Protocol.h>
#import <WebKit/WKObject-Protocol.h>

@class NSArray, NSString, NSURL, UIColor;

@interface _WKApplicationManifest : NSObject <WKObject, NSSecureCoding>
{
    struct ObjectStorage<API::ApplicationManifest> _applicationManifest;	// 8 = 0x8
}

+ (id)applicationManifestFromJSON:(id)arg1 manifestURL:(id)arg2 documentURL:(id)arg3;	// IMP=0x00000000002bab0f
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002b9dbd
@property(readonly, copy, nonatomic) NSArray *icons;
@property(readonly, nonatomic) long long displayMode;
@property(readonly, copy, nonatomic) UIColor *themeColor;
@property(readonly, copy, nonatomic) NSURL *startURL;
@property(readonly, copy, nonatomic) NSURL *scope;
@property(readonly, copy, nonatomic) NSString *applicationDescription;
@property(readonly, copy, nonatomic) NSString *shortName;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly) struct Object *_apiObject;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002ba9f1
- (void)dealloc;	// IMP=0x00000000002ba991
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002b9dc5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

