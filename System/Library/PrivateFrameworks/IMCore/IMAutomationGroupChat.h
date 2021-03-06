//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface IMAutomationGroupChat
{
}

- (id)groupNameWithGroupID:(id)arg1 timeOut:(double)arg2 error:(id *)arg3 optArguments:(id)arg4;	// IMP=0x00000000000ec592
- (id)groupParticipantsWithGroupID:(id)arg1 timeOut:(double)arg2 error:(id *)arg3 optArguments:(id)arg4;	// IMP=0x00000000000eb3c9
- (id)changeGroupNameWithGroupID:(id)arg1 newName:(id)arg2 timeOut:(double)arg3 error:(id *)arg4 optArguments:(id)arg5;	// IMP=0x00000000000ead06
- (id)removeParticipantsWithGroupID:(id)arg1 participants:(id)arg2 timeOut:(double)arg3 error:(id *)arg4 optArguments:(id)arg5;	// IMP=0x00000000000eace4
- (id)addParticipantsWithGroupID:(id)arg1 participants:(id)arg2 timeOut:(double)arg3 error:(id *)arg4 optArguments:(id)arg5;	// IMP=0x00000000000eacc2
- (id)_runChangeParticipantsQueryWithGroupID:(id)arg1 participants:(id)arg2 timeOut:(double)arg3 error:(id *)arg4 optArguments:(id)arg5 addParticipants:(_Bool)arg6;	// IMP=0x00000000000e9f81
- (id)createGroupChatWithDestinationIDs:(id)arg1 error:(id *)arg2 optArguments:(id)arg3;	// IMP=0x00000000000e9a49

@end

