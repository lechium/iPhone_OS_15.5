//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/NSSecureCoding-Protocol.h>

@protocol OS_xpc_object;

@interface PLDaemonJobReply : NSObject <NSSecureCoding>
{
    NSObject<OS_xpc_object> *_xpcReply;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003c6e21
@property(readonly, nonatomic) NSObject<OS_xpc_object> *xpcReply; // @synthesize xpcReply=_xpcReply;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003c6db6
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003c6d1a
- (id)initWithReply:(id)arg1;	// IMP=0x00000000003c6cd8

@end

