//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriOntology/NSSecureCoding-Protocol.h>

@interface USOGraph : NSObject <NSSecureCoding>
{
    unique_ptr_e8bae616 _usoGraph;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000005316
- (id).cxx_construct;	// IMP=0x000000000000559e
- (void).cxx_destruct;	// IMP=0x000000000000558e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000054f5
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000531e
- (void *)getCppGraph;	// IMP=0x000000000000530c
- (void *)getCppRootNode;	// IMP=0x00000000000052fb
- (id)getRoot;	// IMP=0x00000000000052bd
- (id)createIntNode:(id)arg1;	// IMP=0x000000000000510f
- (id)createStringNode:(id)arg1;	// IMP=0x0000000000004e73
- (id)createTaskNode:(const void *)arg1 verb:(const void *)arg2;	// IMP=0x0000000000004d39
- (id)createEntityNode:(const void *)arg1;	// IMP=0x0000000000004c02
- (id)createOperatorNode:(const void *)arg1;	// IMP=0x0000000000004a91
- (id)initWithCppUsoGraph:(unique_ptr_e8bae616)arg1;	// IMP=0x0000000000004a38
- (id)init;	// IMP=0x0000000000004988

@end

