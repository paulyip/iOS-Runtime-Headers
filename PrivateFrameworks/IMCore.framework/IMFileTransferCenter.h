/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface IMFileTransferCenter : NSObject {
    NSMutableDictionary *_accountIDToTransferGUIDsMap;
    NSMutableSet *_activeTransfers;
    NSMutableDictionary *_guidToRemovedTransferMap;
    NSMutableDictionary *_guidToTransferMap;
    NSMutableSet *_pendingTransfers;
    NSMutableArray *_preauthorizedGUIDs;
    NSMutableArray *_preauthorizedInfos;
}

@property(readonly) NSArray * activeTransferGUIDs;
@property(readonly) NSArray * activeTransfers;
@property(readonly) BOOL hasActiveFileTransfers;
@property(readonly) BOOL hasPendingFileTransfers;
@property(readonly) NSArray * orderedTransfers;
@property(readonly) NSArray * orderedTransfersGUIDs;
@property(readonly) NSDictionary * transfers;

+ (Class)fileTransferClass;
+ (void)setTransferCenterClass:(Class)arg1;
+ (id)sharedInstance;
+ (Class)transferCenterClass;

- (void)_addActiveTransfer:(id)arg1;
- (void)_addPendingTransfer:(id)arg1;
- (void)_addTransfer:(id)arg1 toAccount:(id)arg2;
- (void)_addTransfer:(id)arg1;
- (void)_clearTransfers;
- (void)_handleAllFileTransfers:(id)arg1;
- (void)_handleFileTransfer:(id)arg1 createdWithProperties:(id)arg2;
- (void)_handleFileTransfer:(id)arg1 updatedWithCurrentBytes:(unsigned long long)arg2 totalBytes:(unsigned long long)arg3 averageTransferRate:(unsigned long long)arg4;
- (void)_handleFileTransfer:(id)arg1 updatedWithProperties:(id)arg2;
- (void)_handleStandaloneFileTransferRegistered:(id)arg1;
- (void)_removeActiveTransfer:(id)arg1;
- (void)_removeAllActiveTransfers;
- (void)_removePendingTransfer:(id)arg1;
- (void)acceptFileTransferIfPreauthorzed:(id)arg1;
- (void)acceptTransfer:(id)arg1 withPath:(id)arg2 autoRename:(BOOL)arg3 overwrite:(BOOL)arg4;
- (void)acknowledgeAllPendingTransfers;
- (void)acknowledgePendingTransfer:(id)arg1;
- (id)activeTransferGUIDs;
- (id)activeTransfers;
- (void)assignTransfer:(id)arg1 toHandle:(id)arg2;
- (void)assignTransfer:(id)arg1 toMessage:(id)arg2 account:(id)arg3;
- (id)chatForTransfer:(id)arg1;
- (void)clearFinishedTransfers;
- (void)dealloc;
- (void)deleteTransfer:(id)arg1;
- (BOOL)doesLocalURLRequireArchiving:(id)arg1 toHandle:(id)arg2;
- (id)guidForNewOutgoingTransferWithLocalURL:(id)arg1;
- (BOOL)hasActiveFileTransfers;
- (BOOL)hasPendingFileTransfers;
- (BOOL)isFileTransfer:(id)arg1 preauthorizedWithDictionary:(id)arg2;
- (id)orderedTransfers;
- (id)orderedTransfersGUIDs;
- (void)preauthorizeFileTransferFromOtherPerson:(id)arg1 account:(id)arg2 filename:(id)arg3 saveToPath:(id)arg4;
- (void)removeTransfer:(id)arg1;
- (void)retargetTransfer:(id)arg1 toPath:(id)arg2;
- (void)sendTransfer:(id)arg1;
- (void)stopTransfer:(id)arg1;
- (id)transferForGUID:(id)arg1 includeRemoved:(BOOL)arg2;
- (id)transferForGUID:(id)arg1;
- (id)transfers;
- (id)transfersForAccount:(id)arg1;
- (BOOL)wasFileTransferPreauthorized:(id)arg1;

@end
