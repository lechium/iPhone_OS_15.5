//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface EMRenameMailboxChangeAction
{
    NSString *_name;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000071806
- (void).cxx_destruct;	// IMP=0x000000000007199b
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000718d8
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007180e
- (id)initWithMailboxObjectID:(id)arg1 newName:(id)arg2;	// IMP=0x000000000007177a
- (id)initWithMailbox:(id)arg1 newName:(id)arg2;	// IMP=0x00000000000716e6

@end

