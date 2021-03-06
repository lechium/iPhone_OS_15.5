//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IMSharedUtilities/NSSecureCoding-Protocol.h>

@class NSString;

@interface IMSandboxedResource : NSObject <NSSecureCoding>
{
    long long _sandboxExtensionHandle;	// 8 = 0x8
    id _resource;	// 16 = 0x10
    NSString *_sandboxExtension;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000b9c2
+ (Class)resourceClass;	// IMP=0x000000000000b658
- (void).cxx_destruct;	// IMP=0x000000000000ba14
@property(retain, nonatomic) NSString *sandboxExtension; // @synthesize sandboxExtension=_sandboxExtension;
@property(retain, nonatomic) id resource; // @synthesize resource=_resource;
@property(nonatomic) long long sandboxExtensionHandle; // @synthesize sandboxExtensionHandle=_sandboxExtensionHandle;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000b8ec
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000b7a8
- (char *)_sandboxExtensionForPID:(int)arg1;	// IMP=0x000000000000b700
- (_Bool)accessResourceByConsumingSandboxExtensionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000b4f6
- (void)authorizeForPID:(int)arg1;	// IMP=0x000000000000b477
- (void)dealloc;	// IMP=0x000000000000b430
- (id)description;	// IMP=0x000000000000b38b

@end

