//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

#import <TelephonyUtilities/TUSanitizedCopying-Protocol.h>

@class NSString;

@interface NSURL (QueryParameters) <TUSanitizedCopying>
+ (id)screenSharingAppURL;	// IMP=0x00000000000143b9
+ (id)faceTimeAppJoinConversationURLForConversationLinkURL:(id)arg1;	// IMP=0x0000000000013116
+ (id)faceTimeAppViewLinkDetailsURLForPseudonym:(id)arg1;	// IMP=0x0000000000012f8a
+ (id)faceTimeAnswerURLWithSourceIdentifier:(id)arg1;	// IMP=0x0000000000012ec4
+ (id)faceTimeUpdateForegroundAppURLForBundleIdentifier:(id)arg1 applicationType:(long long)arg2;	// IMP=0x0000000000012cc7
+ (id)faceTimeAppJoinConversationLinkURL;	// IMP=0x0000000000012c1e
+ (id)faceTimeAppViewLinkDetailsURL;	// IMP=0x0000000000012b75
+ (id)faceTimeUpdateForegroundAppURL;	// IMP=0x0000000000012acc
+ (id)faceTimeShowSystemCallControlsURL;	// IMP=0x0000000000012a23
+ (id)faceTimeShowCarPlayInCallUIURL;	// IMP=0x000000000001297a
+ (id)faceTimeShowInCallUIURL;	// IMP=0x00000000000128d1
+ (id)faceTimeLaunchForOutgoingConversationURL;	// IMP=0x0000000000012828
+ (id)faceTimeLaunchForIncomingCallURL;	// IMP=0x000000000001277f
+ (id)faceTimePromptURLWithURL:(id)arg1;	// IMP=0x00000000000126bd
+ (id)faceTimeURLWithURL:(id)arg1;	// IMP=0x000000000001269a
+ (id)_applyFaceTimeScheme:(id)arg1 toFaceTimeURL:(id)arg2;	// IMP=0x0000000000012558
+ (id)faceTimeTelephonyURLWithPhoneNumber:(id)arg1 showPrompt:(_Bool)arg2;	// IMP=0x000000000001241e
+ (id)faceTimeTelephonyURLWithPhoneNumber:(id)arg1;	// IMP=0x000000000001240a
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 forceAssist:(_Bool)arg3 suppressAssist:(_Bool)arg4 wasAssisted:(_Bool)arg5 audioOnly:(_Bool)arg6;	// IMP=0x000000000001225d
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 audioOnly:(_Bool)arg3;	// IMP=0x0000000000012244
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2;	// IMP=0x0000000000012228
+ (id)faceTimeURLWithDestinationID:(id)arg1;	// IMP=0x0000000000012207
+ (id)_faceTimeURLWithHandle:(id)arg1 addressBookUID:(int)arg2 audioOnly:(_Bool)arg3;	// IMP=0x0000000000011fc5
+ (id)_faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 audioOnly:(_Bool)arg3;	// IMP=0x0000000000011f4b
+ (id)faceTimeURLWithPhoneNumber:(id)arg1 addressBookUID:(int)arg2 audioOnly:(_Bool)arg3 forceAssist:(_Bool)arg4 suppressAssist:(_Bool)arg5 wasAssisted:(_Bool)arg6;	// IMP=0x000000000001453b
+ (id)faceTimeURLWithPhoneNumber:(id)arg1 addressBookUID:(int)arg2 forceAssist:(_Bool)arg3 suppressAssist:(_Bool)arg4 wasAssisted:(_Bool)arg5;	// IMP=0x000000000001451d
+ (id)URLWithTelephoneNumber:(id)arg1 addressBookUID:(int)arg2 forceAssist:(_Bool)arg3 suppressAssist:(_Bool)arg4 wasAssisted:(_Bool)arg5;	// IMP=0x0000000000070ca7
+ (id)URLWithTelephoneNumber:(id)arg1 addressBookUID:(int)arg2;	// IMP=0x0000000000070c95
+ (id)URLWithTelephoneNumber:(id)arg1 promptUser:(_Bool)arg2;	// IMP=0x0000000000070c83
+ (id)URLWithTelephoneNumber:(id)arg1;	// IMP=0x0000000000070c71
+ (id)telephonyURLForTelEmergencyCall;	// IMP=0x0000000000070bf7
+ (id)telephonyURLForVoicemail;	// IMP=0x0000000000070b76
+ (id)telephonyURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 forceAssist:(_Bool)arg3 suppressAssist:(_Bool)arg4 wasAssisted:(_Bool)arg5;	// IMP=0x00000000000709f5
+ (id)telephonyURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2;	// IMP=0x0000000000070933
+ (id)telephonyURLWithDestinationID:(id)arg1 promptUser:(_Bool)arg2;	// IMP=0x000000000007080e
+ (id)telephonyURLWithDestinationID:(id)arg1;	// IMP=0x00000000000707fa
+ (id)tu_defaultAllowedSchemes;	// IMP=0x0000000000091f9c
- (id)URLByDeletingQueryParameterWithKey:(id)arg1;	// IMP=0x000000000000b8ff
- (id)URLBySettingQueryParameterValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000000b7ae
- (id)tuQueryParameters;	// IMP=0x000000000000b322
- (id)queryParameters;	// IMP=0x000000000000b310
- (id)answerRequestSourceIdentifier;	// IMP=0x0000000000014362
- (_Bool)isAnswerRequestURL;	// IMP=0x00000000000142f8
- (long long)foregroundAppApplicationType;	// IMP=0x0000000000014283
- (id)foregroundAppBundleIdentifier;	// IMP=0x000000000001422c
- (_Bool)isUpdateForegroundAppURL;	// IMP=0x00000000000141b0
- (_Bool)isShowScreenSharingURL;	// IMP=0x0000000000014165
- (_Bool)isShowSystemCallControlsURL;	// IMP=0x00000000000140e9
- (_Bool)isShowCarPlayInCallUIURL;	// IMP=0x000000000001406d
- (_Bool)isShowInCallUIURL;	// IMP=0x0000000000013fa9
- (_Bool)isLaunchForOutgoingConversationURL;	// IMP=0x0000000000013f2d
- (_Bool)isLaunchForIncomingCallURL;	// IMP=0x0000000000013eb1
- (_Bool)isDialCallURL;	// IMP=0x0000000000013e7a
- (_Bool)hasNoPromptOption;	// IMP=0x0000000000013df2
- (id)conversationLinkURLForJoinConversation;	// IMP=0x0000000000013b45
- (_Bool)isFaceTimeAppJoinConversationLinkURL;	// IMP=0x0000000000013ac9
- (id)conversationLinkURLForOpenLinkURL;	// IMP=0x000000000001381c
- (_Bool)isFaceTimeOpenLinkURL;	// IMP=0x00000000000137d1
- (id)pseudonymForLinkDetailsView;	// IMP=0x0000000000013559
- (_Bool)isFaceTimeAppViewLinkDetailsURL;	// IMP=0x00000000000134dd
- (_Bool)isSystemCallControlsURL;	// IMP=0x0000000000013492
- (_Bool)isFaceTimeMultiwayURL;	// IMP=0x0000000000013447
- (_Bool)isFaceTimeAudioPromptURL;	// IMP=0x00000000000133fc
- (_Bool)isFaceTimeAudioURL;	// IMP=0x0000000000013390
- (_Bool)isFaceTimePromptURL;	// IMP=0x0000000000013345
- (_Bool)isFaceTimeURL;	// IMP=0x00000000000132d9
- (_Bool)_isPhoneNumberID:(id)arg1;	// IMP=0x0000000000011ee3
- (id)faceTimeDestinationAccount;	// IMP=0x0000000000011dae
- (id)_mobilePhoneQueryParameters;	// IMP=0x0000000000071db1
- (id)_mobilePhonePathParameters;	// IMP=0x0000000000071ab6
- (id)telephonyParameterDictionary;	// IMP=0x00000000000719ec
@property(readonly) _Bool isVoicemailURL;
@property(readonly) _Bool isEmergencyCallURL;
@property(readonly) _Bool isEmergencyURL;
@property(readonly, nonatomic, getter=isBasebandLogURL) _Bool basebandLogURL;
- (id)webSafeTelephoneURL;	// IMP=0x000000000007163f
- (_Bool)isWebSafeTelephoneURL;	// IMP=0x00000000000714e6
@property(readonly, copy, nonatomic) NSString *numberQualifiedForAddressBook;
@property(readonly, copy, nonatomic) NSString *formattedPhoneNumber;
- (_Bool)_hasScheme:(id)arg1;	// IMP=0x000000000007120b
- (_Bool)hasTelephonyScheme;	// IMP=0x00000000000711cb
- (_Bool)isTelephonyPromptURL;	// IMP=0x00000000000711b2
- (_Bool)isTelephonyURL;	// IMP=0x000000000007115b
- (_Bool)_dialAssistBooleanQueryParameterValueForKey:(id)arg1;	// IMP=0x000000000007107e
@property(readonly) _Bool wasAlreadyAssisted;
@property(readonly) _Bool suppressAssist;
@property(readonly) _Bool forceAssist;
@property(readonly) NSString *originatingUIIdentifier;
@property(readonly) int callService;
@property(readonly, nonatomic) int addressBookUID;
@property(readonly) NSString *phoneNumber;
- (id)_destinationIDConvertingNumbersToLatin:(_Bool)arg1;	// IMP=0x0000000000070cb9
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1 allowedSchemes:(id)arg2;	// IMP=0x00000000000920db
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000092070
- (id)sanitizedCopy;	// IMP=0x0000000000092008

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

