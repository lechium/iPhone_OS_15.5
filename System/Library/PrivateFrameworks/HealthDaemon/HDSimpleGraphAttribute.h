//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HDSimpleGraphNode, NSString;

@interface HDSimpleGraphAttribute
{
    long long _keyID;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    NSString *_value;	// 24 = 0x18
    long long _valueType;	// 32 = 0x20
    long long _nodeID;	// 40 = 0x28
    HDSimpleGraphNode *_node;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000046b30f
@property(readonly, nonatomic) __weak HDSimpleGraphNode *node; // @synthesize node=_node;
@property(readonly, nonatomic) long long nodeID; // @synthesize nodeID=_nodeID;
@property(readonly, nonatomic) long long valueType; // @synthesize valueType=_valueType;
@property(readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, nonatomic) long long keyID; // @synthesize keyID=_keyID;
- (id)description;	// IMP=0x000000000046b20f
- (id)initWithRowID:(long long)arg1 keyID:(long long)arg2 key:(id)arg3 value:(id)arg4 valueType:(long long)arg5 nodeID:(long long)arg6 node:(id)arg7;	// IMP=0x000000000046b0e8
- (id)initWithRowID:(long long)arg1;	// IMP=0x000000000046b06e
- (id)init;	// IMP=0x000000000046aff4

@end

