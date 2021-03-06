//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FileProvider/NSSecureCoding-Protocol.h>

@class NSData;

@interface NSFileProviderItemVersion : NSObject <NSSecureCoding>
{
    NSData *_contentVersion;	// 8 = 0x8
    NSData *_metadataVersion;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000031d0
+ (id)beforeFirstSyncComponent;	// IMP=0x0000000000002fe6
- (void).cxx_destruct;	// IMP=0x0000000000003617
@property(readonly, nonatomic) NSData *metadataVersion; // @synthesize metadataVersion=_metadataVersion;
@property(readonly, nonatomic) NSData *contentVersion; // @synthesize contentVersion=_contentVersion;
- (id)versionRewritingBeforeFirstSync;	// IMP=0x000000000000344a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000330b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000003246
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000031d8
- (id)description;	// IMP=0x0000000000003182
- (_Bool)isEmpty;	// IMP=0x0000000000003143
- (id)init;	// IMP=0x0000000000003109
- (id)initWithContentVersion:(id)arg1 metadataVersion:(id)arg2;	// IMP=0x0000000000003050

@end

