//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSDescriptionProviding-Protocol.h>
#import <BaseBoard/BSXPCDecoding-Protocol.h>
#import <BaseBoard/BSXPCEncoding-Protocol.h>
#import <BaseBoard/BSXPCSecureCoding-Protocol.h>

@class NSKeyedArchiver, NSKeyedUnarchiver, NSString;
@protocol OS_xpc_object;

@interface BSXPCCoder : NSObject <BSDescriptionProviding, BSXPCSecureCoding, BSXPCEncoding, BSXPCDecoding>
{
    NSObject<OS_xpc_object> *_message;	// 8 = 0x8
    NSObject<OS_xpc_object> *_xpcConnection;	// 16 = 0x10
    NSObject<OS_xpc_object> *_codingContext;	// 24 = 0x18
    NSKeyedArchiver *_archiver;	// 32 = 0x20
    NSKeyedUnarchiver *_unarchiver;	// 40 = 0x28
    int _finalized;	// 48 = 0x30
}

+ (_Bool)supportsBSXPCSecureCoding;	// IMP=0x000000000007f31f
+ (id)coderWithMessage:(id)arg1;	// IMP=0x000000000007cdbc
+ (id)coder;	// IMP=0x000000000007cd98
- (void).cxx_destruct;	// IMP=0x000000000007f99e
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000007f914
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000007f8b0
- (id)succinctDescriptionBuilder;	// IMP=0x000000000007f839
- (id)succinctDescription;	// IMP=0x000000000007f7d5
@property(readonly, copy) NSString *description;
- (id)initWithBSXPCCoder:(id)arg1;	// IMP=0x000000000007f38e
- (void)encodeWithBSXPCCoder:(id)arg1;	// IMP=0x000000000007f327
- (id)_finishCoding;	// IMP=0x000000000007f233
- (id)_implicitDecodeXPCObjectForKey:(id)arg1;	// IMP=0x000000000007f004
- (void)_removeValueForKey:(id)arg1;	// IMP=0x000000000007ee7a
- (unsigned long long)decodeUInt64ForKey:(id)arg1;	// IMP=0x000000000007ee30
- (long long)decodeInt64ForKey:(id)arg1;	// IMP=0x000000000007ede6
- (_Bool)decodeBoolForKey:(id)arg1;	// IMP=0x000000000007ed9c
- (double)decodeDoubleForKey:(id)arg1;	// IMP=0x000000000007ed22
- (struct CGRect)decodeCGRectForKey:(id)arg1;	// IMP=0x000000000007ec92
- (struct CGSize)decodeCGSizeForKey:(id)arg1;	// IMP=0x000000000007ec05
- (struct CGPoint)decodeCGPointForKey:(id)arg1;	// IMP=0x000000000007eb78
- (id)decodeStringForKey:(id)arg1;	// IMP=0x000000000007e8e5
- (id)decodeXPCObjectOfType:(struct _xpc_type_s *)arg1 forKey:(id)arg2;	// IMP=0x000000000007e65f
- (id)decodeCollectionOfClass:(Class)arg1 containingClass:(Class)arg2 forKey:(id)arg3;	// IMP=0x000000000007e652
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;	// IMP=0x000000000007e221
- (_Bool)containsValueForKey:(id)arg1;	// IMP=0x000000000007e02b
- (void)encodeUInt64:(unsigned long long)arg1 forKey:(id)arg2;	// IMP=0x000000000007dfe0
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;	// IMP=0x000000000007df95
- (void)encodeBool:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x000000000007df49
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;	// IMP=0x000000000007ded0
- (void)encodeCGRect:(struct CGRect)arg1 forKey:(id)arg2;	// IMP=0x000000000007de4b
- (void)encodeCGSize:(struct CGSize)arg1 forKey:(id)arg2;	// IMP=0x000000000007dddf
- (void)encodeCGPoint:(struct CGPoint)arg1 forKey:(id)arg2;	// IMP=0x000000000007dd73
- (void)encodeXPCObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000007dd61
- (void)encodeCollection:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000007dc56
- (void)encodeObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000007d0a7
- (id)createMessage;	// IMP=0x000000000007d095
@property(readonly, retain, nonatomic) NSObject<OS_xpc_object> *XPCConnection;
@property(readonly, retain, nonatomic) NSObject<OS_xpc_object> *message;
- (void)dealloc;	// IMP=0x000000000007cf4d
- (id)initWithMessage:(id)arg1;	// IMP=0x000000000007cdff
- (id)init;	// IMP=0x000000000007cdeb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
