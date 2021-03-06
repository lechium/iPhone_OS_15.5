//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FileProvider/NSCopying-Protocol.h>
#import <FileProvider/NSSecureCoding-Protocol.h>

@class FPItem, NSString, NSURL;

@interface FPActionOperationLocator : NSObject <NSCopying, NSSecureCoding>
{
    NSObject *_object;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000b6959
+ (id)locatorForItem:(id)arg1;	// IMP=0x00000000000b67c9
+ (id)locatorForURL:(id)arg1;	// IMP=0x00000000000b6773
- (void).cxx_destruct;	// IMP=0x00000000000b6f25
@property(readonly, nonatomic) _Bool requiresCrossDeviceCopy;
- (void)attachSandboxExtensionOnXPCEncoding;	// IMP=0x00000000000b6ea2
@property(readonly, nonatomic) _Bool isFolder;
@property(readonly, nonatomic) id parentIdentifier;
@property(readonly, nonatomic) id identifier;
- (_Bool)isDownloaded;	// IMP=0x00000000000b6cae
@property(readonly, nonatomic) unsigned long long size;
@property(readonly, nonatomic) NSString *filename;
@property(readonly, nonatomic) FPItem *asFPItem;
@property(readonly, nonatomic) NSURL *asURL;
@property(readonly, nonatomic) _Bool isProviderItem;
@property(readonly, nonatomic) _Bool isExternalURL;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b6984
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000b6961
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b68ef
- (unsigned long long)hash;	// IMP=0x00000000000b68d9
@property(readonly, nonatomic) id underlyingObject;
- (void)_setObject:(id)arg1;	// IMP=0x00000000000b68ba
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b688a
- (id)initWithObject:(id)arg1;	// IMP=0x00000000000b681f

@end

