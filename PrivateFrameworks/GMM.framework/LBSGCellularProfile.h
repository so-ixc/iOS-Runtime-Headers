/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class LBSGCell, NSMutableArray;

@interface LBSGCellularProfile : PBCodable  {
    LBSGCell *_primaryCell;
    long long _timestamp;
    NSMutableArray *_neighbors;
    NSMutableArray *_historicalCells;
    BOOL _hasPrefetchMode;
    int _prefetchMode;
}

@property(retain) LBSGCell * primaryCell;
@property long long timestamp;
@property(retain) NSMutableArray * neighbors;
@property(retain) NSMutableArray * historicalCells;
@property BOOL hasPrefetchMode;
@property int prefetchMode;


- (BOOL)readFrom:(id)arg1;
- (void)setHasPrefetchMode:(BOOL)arg1;
- (BOOL)hasPrefetchMode;
- (id)historicalCells;
- (id)neighbors;
- (id)primaryCell;
- (int)prefetchMode;
- (id)historicalCellsAtIndex:(unsigned int)arg1;
- (unsigned int)historicalCellsCount;
- (id)neighborsAtIndex:(unsigned int)arg1;
- (unsigned int)neighborsCount;
- (void)setPrefetchMode:(int)arg1;
- (void)addHistoricalCells:(id)arg1;
- (void)addNeighbors:(id)arg1;
- (void)setHistoricalCells:(id)arg1;
- (void)setNeighbors:(id)arg1;
- (void)setPrimaryCell:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)dictionaryRepresentation;
- (long long)timestamp;
- (void)setTimestamp:(long long)arg1;
- (id)description;
- (void)dealloc;

@end