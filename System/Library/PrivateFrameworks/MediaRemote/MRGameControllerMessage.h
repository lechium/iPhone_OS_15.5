//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _MRGameControllerMessageProtobuf;

@interface MRGameControllerMessage
{
}

- (_Bool)shouldLog;	// IMP=0x000000000002a759
- (unsigned long long)type;	// IMP=0x000000000002a74e
@property(readonly, nonatomic) unsigned long long controllerID;
@property(readonly, nonatomic) _MRGameControllerMessageProtobuf *event;
- (id)initWithGameControllerEvent:(id)arg1 controllerID:(unsigned long long)arg2;	// IMP=0x000000000002a687

@end
